#include "Button.h"
#include "../CallBackManager.h"
#include "../../ActionListeners/ButtonMouseOverListener.h"
#include "../../ActionListeners/ButtonMouseOutListener.h"

Button::Button(sf::RenderWindow& window, int state, int x, int y, int size, sf::Font font, std::string content) : GuiItem(window, state, x - MARGIN / 2, y - MARGIN / 2)
{
	_font = font;

	_text.SetText(content);
	_text.SetFont(_font);
	_text.SetSize(size);
	_text.SetPosition(x, y);
	_text.SetColor(sf::Color(0, 0, 0));

	_sizex = _text.GetRect().GetWidth() + MARGIN * 2;
	_sizey = _text.GetRect().GetHeight() + MARGIN * 2;

	UpdateRect();

	_listeners.push_back(new ButtonMouseOverListener(MOUSEOVER, this));
	_listeners.push_back(new ButtonMouseOutListener(MOUSEOUT, this));
}

void Button::Draw(int state)
{
	if(CanDraw(state))
	{
		_window.Draw(_rect);
		_window.Draw(_text);
	}
}

sf::String &Button::GetText()
{
	return _text;
}

void Button::SetX(int x)
{
    GuiItem::SetX(x);
    _text.SetPosition(_x, _y);
    UpdateRect();
}

void Button::SetY(int y)
{
    GuiItem::SetY(y);
    _text.SetPosition(_x, _y);
    UpdateRect();
}

void Button::UpdateRect()
{
    _rect = sf::Shape::Rectangle(_x - MARGIN / 2, _y - MARGIN / 2, _x + _sizex, _y + _sizey, sf::Color(255, 255, 255));
}
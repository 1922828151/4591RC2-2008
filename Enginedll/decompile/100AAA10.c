/*
 * func-name: ?HandleKeyboard@CRESlider@@UAE_NIIJ@Z
 * func-address: 0x100aaa10
 * callers: none
 * callees: 0x100a3bc0
 */

bool __thiscall CRESlider::HandleKeyboard(CRESlider *this, unsigned int a2, unsigned int a3, int a4)
{
  bool result; // al

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) || a2 != 256 )
    return 0;
  switch ( a3 )
  {
    case '!':
    case '%':
    case '&':
      CRESlider::SetValueInternal(this, *((_DWORD *)this + 134) - 1, 1);
      result = 1;
      break;
    case '"':
    case '\'':
    case '(':
      CRESlider::SetValueInternal(this, *((_DWORD *)this + 134) + 1, 1);
      result = 1;
      break;
    case '#':
      CRESlider::SetValueInternal(this, *((_DWORD *)this + 136), 1);
      result = 1;
      break;
    case '$':
      CRESlider::SetValueInternal(this, *((_DWORD *)this + 135), 1);
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

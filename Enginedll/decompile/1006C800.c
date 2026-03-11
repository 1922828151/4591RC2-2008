/*
 * func-name: ??0CREElement@@QAE@XZ
 * func-address: 0x1006c800
 * callers: none
 * callees: none
 */

CREElement *__thiscall CREElement::CREElement(CREElement *this)
{
  CREElement *result; // eax

  result = this;
  *((_BYTE *)this + 28) = 0;
  *(_DWORD *)this = -1;
  return result;
}

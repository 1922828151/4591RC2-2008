/*
 * func-name: ?SetRotate@CREElement@@QAEXM@Z
 * func-address: 0x100a6040
 * callers: none
 * callees: none
 */

void __thiscall CREElement::SetRotate(CREElement *this, float a2)
{
  *((_BYTE *)this + 28) = 1;
  *((float *)this + 8) = a2;
}

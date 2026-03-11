/*
 * func-name: ?GetElement@CREControl@@QAEPAVCREElement@@I@Z
 * func-address: 0x1006c840
 * callers: none
 * callees: none
 */

struct CREElement *__thiscall CREControl::GetElement(CREControl *this, unsigned int a2)
{
  return *(struct CREElement **)(*((_DWORD *)this + 30) + 4 * a2);
}

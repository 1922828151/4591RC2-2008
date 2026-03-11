/*
 * func-name: sub_101CAB50
 * func-address: 0x101cab50
 * callers: 0x10009ef3
 * callees: 0x10013efd, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101CAB50(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF28u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CPasswordInputUI::~CPasswordInputUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CPasswordInputUI::~CPasswordInputUI((CPasswordInputUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}

/*
 * func-name: sub_1018ED50
 * func-address: 0x1018ed50
 * callers: 0x10012431
 * callees: 0x1000f565, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1018ED50(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF28u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CKillingInfoUI::~CKillingInfoUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CKillingInfoUI::~CKillingInfoUI((CKillingInfoUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}

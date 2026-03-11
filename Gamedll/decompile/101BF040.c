/*
 * func-name: ??0CPowerTransportUI@@QAE@ABV0@@Z_0
 * func-address: 0x101bf040
 * callers: 0x10012f30
 * callees: none
 */

CPowerTransportUI *__thiscall CPowerTransportUI::CPowerTransportUI(
        CPowerTransportUI *this,
        const struct CPowerTransportUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CPowerTransportUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  *((_DWORD *)this + 970) = *((_DWORD *)a2 + 970);
  *((float *)this + 971) = *((float *)a2 + 971);
  return this;
}

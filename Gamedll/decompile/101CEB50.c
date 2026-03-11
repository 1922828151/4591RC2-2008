/*
 * func-name: ??0CWaitQueueUI@@QAE@ABV0@@Z_0
 * func-address: 0x101ceb50
 * callers: 0x10001613
 * callees: none
 */

CWaitQueueUI *__thiscall CWaitQueueUI::CWaitQueueUI(CWaitQueueUI *this, const struct CWaitQueueUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CWaitQueueUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  *((_DWORD *)this + 970) = *((_DWORD *)a2 + 970);
  *((_DWORD *)this + 971) = *((_DWORD *)a2 + 971);
  *((_DWORD *)this + 972) = *((_DWORD *)a2 + 972);
  return this;
}

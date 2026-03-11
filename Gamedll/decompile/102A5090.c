/*
 * func-name: ??0CWaitQueueUI@@QAE@XZ_0
 * func-address: 0x102a5090
 * callers: 0x1001204e
 * callees: 0x1000d50d
 */

CWaitQueueUI *__thiscall CWaitQueueUI::CWaitQueueUI(CWaitQueueUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CWaitQueueUI::`vftable';
  *((_DWORD *)this + 22) = 13;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CWaitQueueUI::Initialize(this);
  return this;
}

/*
 * func-name: ?AddControl@CControlBox@@QAE_NPAVCREControl@@HH@Z
 * func-address: 0x10155cf0
 * callers: none
 * callees: 0x10158cf0
 */

char __thiscall CControlBox::AddControl(CControlBox *this, struct CREControl *a2, int a3, int a4)
{
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[1] = a3;
  v5[0] = a2;
  v5[2] = a4;
  sub_10158CF0((int)this + 532, v5);
  return 1;
}

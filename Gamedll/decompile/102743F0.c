/*
 * func-name: ??0CGroupQuickCallUI@@QAE@XZ_0
 * func-address: 0x102743f0
 * callers: 0x1001a316
 * callees: 0x100022a7, 0x1000cfb3
 */

CGroupQuickCallUI *__thiscall CGroupQuickCallUI::CGroupQuickCallUI(CGroupQuickCallUI *this)
{
  char v3; // [esp+Fh] [ebp-11h] BYREF
  CGroupQuickCallUI *v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  v4 = this;
  CTYDialog::CTYDialog(this);
  v5 = 0;
  *(_DWORD *)this = &CGroupQuickCallUI::`vftable';
  sub_100022A7((int)&v3, (int)&v3);
  LOBYTE(v5) = 1;
  *((_DWORD *)this + 22) = 17;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CGroupQuickCallUI::Initialize(this);
  return this;
}

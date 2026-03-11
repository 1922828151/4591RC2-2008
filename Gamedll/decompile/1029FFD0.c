/*
 * func-name: sub_1029FFD0
 * func-address: 0x1029ffd0
 * callers: 0x10018264
 * callees: 0x10005b73
 */

int __thiscall sub_1029FFD0(int this)
{
  int v3; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+4h] [ebp-18h]

  CTYDialog::CTYDialog((CTYDialog *)this);
  *(_DWORD *)this = &CSystemConfigUI::`vftable';
  *(_DWORD *)(this + 3900) = 0;
  *(_DWORD *)(this + 3904) = 0;
  *(_DWORD *)(this + 3908) = 0;
  *(_DWORD *)(this + 3916) = 0;
  *(_DWORD *)(this + 3920) = 0;
  *(_DWORD *)(this + 3924) = 0;
  *(_DWORD *)(this + 3932) = 0;
  *(_DWORD *)(this + 3936) = 0;
  *(_DWORD *)(this + 3940) = 0;
  *(_DWORD *)(this + 3948) = 0;
  *(_DWORD *)(this + 3952) = 0;
  *(_DWORD *)(this + 3956) = 0;
  *(_DWORD *)(this + 4000) = 0;
  *(_DWORD *)(this + 168) = 2;
  sub_10005B73(v3, v4);
  *(float *)(this + 3992) = -1.0;
  *(_DWORD *)(this + 88) = 23;
  *(float *)(this + 3996) = -1.0;
  *(_DWORD *)(this + 3836) = 1;
  *(float *)(this + 3988) = -1.0;
  *(_DWORD *)(this + 3984) = 0;
  return this;
}

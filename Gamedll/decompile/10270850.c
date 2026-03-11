/*
 * func-name: sub_10270850
 * func-address: 0x10270850
 * callers: 0x1000c28e
 * callees: 0x1000f59c, 0x100172ec
 */

int __thiscall sub_10270850(int this)
{
  int v3; // [esp+4h] [ebp-1Ch]
  int v4; // [esp+4h] [ebp-1Ch]
  int v5; // [esp+8h] [ebp-18h]
  int v6; // [esp+8h] [ebp-18h]

  CTYDialog::CTYDialog((CTYDialog *)this);
  *(float *)(this + 3888) = 0.0;
  *(_DWORD *)this = &CFixtureUIHeader::`vftable';
  *(_BYTE *)(this + 3884) = 0;
  *(_BYTE *)(this + 3885) = 0;
  *(_DWORD *)(this + 88) = 3;
  *(_DWORD *)(this + 3836) = 1;
  CTYDialog::ShowDialog((CTYDialog *)this, 0, 0.0);
  *(_DWORD *)(this + 168) = 2;
  sub_100172EC(v3, v5);
  sub_1000F59C(v4, v6);
  *(_DWORD *)(this + 3896) = 0;
  *(_DWORD *)(this + 3892) = 0;
  return this;
}

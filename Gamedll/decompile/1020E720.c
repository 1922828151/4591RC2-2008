/*
 * func-name: sub_1020E720
 * func-address: 0x1020e720
 * callers: 0x100052a4
 * callees: 0x10003ec2, 0x10008206, 0x10013124, 0x10016a4f
 */

char __thiscall sub_1020E720(int *this, char a2)
{
  int v3; // ebx
  int v5; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_10013124((int)v6, (int)&a2);
  v3 = this[23];
  if ( !v6[0] || (int *)v6[0] != this + 22 )
    _invalid_parameter_noinfo();
  if ( v6[1] != v3 )
    return 0;
  sub_10003EC2((int)v6, (int)&a2);
  v5 = sub_10016A4F(a2);
  sub_10008206(this[1], v5);
  return 1;
}

/*
 * func-name: sub_10294340
 * func-address: 0x10294340
 * callers: 0x10004e21
 * callees: 0x100081bb
 */

int __thiscall sub_10294340(_DWORD *this, int a2)
{
  int result; // eax

  this[146] = a2;
  result = sub_100081BB();
  this[170] = *(_DWORD *)(this[146] + 600);
  return result;
}

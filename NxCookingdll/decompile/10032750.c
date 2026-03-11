/*
 * func-name: sub_10032750
 * func-address: 0x10032750
 * callers: 0x100483cb, 0x1004840a
 * callees: 0x10032460
 */

int __thiscall sub_10032750(int this, char *Source)
{
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_10032460((_DWORD *)this, Source, strlen(Source));
  return this;
}

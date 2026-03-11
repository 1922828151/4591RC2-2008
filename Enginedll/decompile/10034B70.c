/*
 * func-name: sub_10034B70
 * func-address: 0x10034b70
 * callers: 0x10035930
 * callees: 0x10034530
 */

void __thiscall sub_10034B70(int this)
{
  sub_10034530((void *)this);
  if ( *(_DWORD *)(this + 56) )
  {
    free(*(void **)(this + 56));
    *(_DWORD *)(this + 56) = 0;
  }
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 60) = 0;
  if ( *(_DWORD *)(this + 44) )
  {
    free(*(void **)(this + 44));
    *(_DWORD *)(this + 44) = 0;
  }
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 48) = 0;
  if ( *(_DWORD *)(this + 32) )
  {
    free(*(void **)(this + 32));
    *(_DWORD *)(this + 32) = 0;
  }
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 36) = 0;
  if ( *(_DWORD *)(this + 20) )
  {
    free(*(void **)(this + 20));
    *(_DWORD *)(this + 20) = 0;
  }
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 24) = 0;
  if ( *(_DWORD *)(this + 8) )
  {
    free(*(void **)(this + 8));
    *(_DWORD *)(this + 8) = 0;
  }
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
}

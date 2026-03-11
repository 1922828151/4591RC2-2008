/*
 * func-name: sub_100015A0
 * func-address: 0x100015a0
 * callers: 0x10001610, 0x100024c0
 * callees: 0x10034bd3, 0x10034f08, 0x10034f10
 */

void __thiscall sub_100015A0(int this, int a2)
{
  void *v3; // ebx
  char *v4; // ecx
  _BYTE *v5; // edx
  char v6; // al

  if ( a2 > *(_DWORD *)(this + 20) )
  {
    v3 = operator new(2 * a2 + 1);
    memset(v3, 0, 2 * a2 + 1);
    v4 = *(char **)(this + 16);
    v5 = v3;
    if ( v4 )
    {
      do
      {
        v6 = *v4;
        *v5++ = *v4++;
      }
      while ( v6 );
    }
    else
    {
      strcpy((char *)v3, (const char *)this);
    }
    if ( *(_DWORD *)(this + 16) )
      j__free(*(void **)(this + 16));
    *(_DWORD *)(this + 20) = 2 * a2;
    *(_DWORD *)(this + 16) = v3;
  }
}

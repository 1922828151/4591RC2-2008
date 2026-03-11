/*
 * func-name: sub_100611D0
 * func-address: 0x100611d0
 * callers: 0x10061480
 * callees: none
 */

void __thiscall sub_100611D0(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax

  v3 = *(_DWORD *)(this + 8);
  if ( v3 != -1 )
  {
    v4 = *(_DWORD *)(this + 4);
    v5 = v4 + a2;
    if ( v4 < v4 + a2 )
    {
      do
      {
        v6 = *(_DWORD *)(this + 4);
        if ( v6 )
        {
          if ( v3 )
            v7 = v3 + v6;
          else
            v7 = 2 * v6;
          *(_DWORD *)(this + 4) = v7;
        }
        else
        {
          *(_DWORD *)(this + 4) = 1;
        }
      }
      while ( *(_DWORD *)(this + 4) < v5 );
    }
    if ( *(_DWORD *)this )
      *(_DWORD *)this = realloc(*(void **)this, 44 * *(_DWORD *)(this + 4));
    else
      *(_DWORD *)this = malloc(44 * *(_DWORD *)(this + 4));
  }
}

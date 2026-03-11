/*
 * func-name: sub_10061400
 * func-address: 0x10061400
 * callers: 0x10061750
 * callees: none
 */

void __thiscall sub_10061400(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax

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
          *(_DWORD *)(this + 4) = 6;
        }
      }
      while ( *(_DWORD *)(this + 4) < v5 );
    }
    v8 = *(_DWORD *)(this + 4);
    if ( *(_DWORD *)this )
      *(_DWORD *)this = realloc(*(void **)this, 6 * v8);
    else
      *(_DWORD *)this = malloc(6 * v8);
  }
}

/*
 * func-name: sub_10206740
 * func-address: 0x10206740
 * callers: 0x10009b83
 * callees: 0x10002e37
 */

_DWORD *__thiscall sub_10206740(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  void *v6; // ebx
  int v7; // edi
  int v8; // eax

  v3 = this[3];
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) <= this[2] )
  {
    v5 = *(_DWORD *)(v3 + this[1]);
    this[3] = v4;
    if ( v5 )
    {
      v6 = (void *)a2;
      v7 = v5;
      do
      {
        v8 = this[3];
        if ( (unsigned int)(v8 + 4) <= this[2] )
        {
          a2 = *(_DWORD *)(v8 + this[1]);
          this[3] = v8 + 4;
        }
        sub_10002E37(v6, (int)&a2);
        --v7;
      }
      while ( v7 );
    }
  }
  return this;
}

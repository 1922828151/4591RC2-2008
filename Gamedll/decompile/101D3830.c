/*
 * func-name: sub_101D3830
 * func-address: 0x101d3830
 * callers: 0x10008f30
 * callees: 0x1001a0f5
 */

_DWORD *__thiscall sub_101D3830(_DWORD *this, int a2)
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
        sub_1001A0F5(v6, (int)&a2);
        --v7;
      }
      while ( v7 );
    }
  }
  return this;
}

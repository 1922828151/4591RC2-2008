/*
 * func-name: sub_1007FFA0
 * func-address: 0x1007ffa0
 * callers: 0x1008e470
 * callees: 0x1015db70, 0x101a252e
 */

int __thiscall sub_1007FFA0(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi

  v2 = this[1];
  v3 = *this + v2 * *(_DWORD *)(this[5] + 8);
  v4 = 0;
  if ( this[3] - v2 > 0 )
  {
    do
    {
      memcpy(
        (void *)(*(_DWORD *)(this[5] + 20) + 4 * (v3 + v4 * *(_DWORD *)(this[5] + 8))),
        (const void *)(*(_DWORD *)this[4] + 4 * v4 * (this[2] - *this)),
        4 * (this[2] - *this));
      ++v4;
    }
    while ( v4 < this[3] - this[1] );
  }
  return sub_1015DB70(this);
}

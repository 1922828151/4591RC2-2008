/*
 * func-name: sub_100017E0
 * func-address: 0x100017e0
 * callers: 0x100021a0, 0x10002970
 * callees: none
 */

bool __thiscall sub_100017E0(_DWORD *this)
{
  int v1; // edi
  bool v3; // zf
  int v4; // eax

  v1 = 0;
  v3 = this[2] == 0;
  v4 = 1;
  if ( (int)this[2] > 0 )
  {
    do
    {
      if ( v4 <= 0 )
        break;
      v4 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 12))(this, (int)this + v1 + 12, this[2] - v1);
      if ( v4 > 0 )
        v1 += v4;
    }
    while ( v1 < this[2] );
    v3 = v1 == this[2];
  }
  this[2] = 0;
  return v3;
}

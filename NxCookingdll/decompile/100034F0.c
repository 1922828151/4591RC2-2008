/*
 * func-name: sub_100034F0
 * func-address: 0x100034f0
 * callers: none
 * callees: 0x10002970
 */

void *__thiscall sub_100034F0(void *this, char a2)
{
  sub_10002970(this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this);
  return this;
}

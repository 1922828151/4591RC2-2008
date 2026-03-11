/*
 * func-name: ?normalize@Time_Value@Utility@Outpop@@AAEXXZ
 * func-address: 0x100018c0
 * callers: 0x10001010, 0x100010f0, 0x10001310, 0x10001330, 0x10001350, 0x10001370, 0x100013c0, 0x10001410, 0x10001430, 0x10001470, 0x10001490, 0x10001520, 0x100016f0, 0x10001710, 0x10001730, 0x10001760, 0x10001790, 0x100017c0, 0x100017d0, 0x10001800, 0x10001810, 0x10001940, 0x10004830, 0x10016de0, 0x10016ef0, 0x1001cc30, 0x1001cc50
 * callees: none
 */

void __thiscall Outpop::Utility::Time_Value::normalize(Outpop::Utility::Time_Value *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // edx

  v1 = *((_DWORD *)this + 1);
  if ( v1 >= 1000000 )
  {
    v2 = *(_DWORD *)this;
    do
    {
      v1 -= 1000000;
      ++v2;
    }
    while ( v1 >= 1000000 );
LABEL_8:
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 1) = v1;
    goto LABEL_9;
  }
  if ( v1 <= -1000000 )
  {
    v2 = *(_DWORD *)this;
    do
    {
      v1 += 1000000;
      --v2;
    }
    while ( v1 <= -1000000 );
    goto LABEL_8;
  }
LABEL_9:
  v3 = *(_DWORD *)this;
  if ( *(int *)this < 1 || (v4 = *((_DWORD *)this + 1), v4 >= 0) )
  {
    if ( v3 < 0 )
    {
      v5 = *((_DWORD *)this + 1);
      if ( v5 > 0 )
      {
        *((_DWORD *)this + 1) = v5 - 1000000;
        *(_DWORD *)this = v3 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)this + 1) = v4 + 1000000;
    *(_DWORD *)this = v3 - 1;
  }
}

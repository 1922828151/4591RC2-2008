/*
 * func-name: ?Tick@FXManager@@QAEXPAVFXSystem@@@Z
 * func-address: 0x1009fbd0
 * callers: none
 * callees: none
 */

void __thiscall FXManager::Tick(FXManager *this, struct FXSystem *a2)
{
  float v3; // [esp+4h] [ebp+4h]

  if ( -1.0 != *((float *)a2 + 27) )
  {
    v3 = *((float *)a2 + 27) - GDeltaTime;
    *((float *)a2 + 27) = v3;
    if ( v3 <= 0.0 )
      *((float *)a2 + 27) = 1.0e-10;
  }
  if ( !*((_BYTE *)a2 + 113) )
    (*(void (__thiscall **)(struct FXSystem *))(*(_DWORD *)a2 + 8))(a2);
}

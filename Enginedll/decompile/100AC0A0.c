/*
 * func-name: ?GetControlByID@CREPropertiesList@@QAEPAVCREControl@@H@Z
 * func-address: 0x100ac0a0
 * callers: none
 * callees: none
 */

struct CREControl *__thiscall CREPropertiesList::GetControlByID(CREPropertiesList *this, int a2)
{
  int v2; // esi
  int v3; // eax
  int i; // ecx

  v2 = *((_DWORD *)this + 306);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = *((_DWORD *)this + 305); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 512) + 136) != a2; i += 4 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return *(struct CREControl **)(*(_DWORD *)i + 512);
}

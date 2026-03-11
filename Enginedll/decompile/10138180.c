/*
 * func-name: ?RefreshLightExclusionLists@World@@QAEXXZ
 * func-address: 0x10138180
 * callers: none
 * callees: 0x100df380
 */

void __thiscall World::RefreshLightExclusionLists(World *this)
{
  unsigned int i; // edi
  int v3; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 810);
    if ( !v3 || i >= (*((_DWORD *)this + 811) - v3) >> 2 )
      break;
    Light::GenerateExclusionListHandles(*(char ***)(*((_DWORD *)this + 810) + 4 * i));
  }
}

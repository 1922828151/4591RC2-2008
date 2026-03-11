/*
 * func-name: ?ClearExclusionListHandles@Light@@QAEXXZ
 * func-address: 0x1001fde0
 * callers: none
 * callees: 0x100a1d10
 */

void __thiscall Light::ClearExclusionListHandles(Light *this)
{
  char *v1; // esi
  void *v2; // edi
  void *v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF

  v1 = (char *)this + 1436;
  v2 = (void *)*((_DWORD *)this + 361);
  if ( *((_DWORD *)this + 360) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = (void *)*((_DWORD *)v1 + 1);
  if ( (unsigned int)v3 > *((_DWORD *)v1 + 2) )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((int)&v4, (int)v1, v3, (int)v1, v2);
}

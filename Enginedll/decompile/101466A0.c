/*
 * func-name: sub_101466A0
 * func-address: 0x101466a0
 * callers: 0x10141cd0, 0x10142040, 0x10142560, 0x10142950, 0x10142c80, 0x101438a0
 * callees: none
 */

void __thiscall sub_101466A0(int this)
{
  if ( *(_DWORD *)(this + 88) )
    free(*(void **)(this + 88));
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
}

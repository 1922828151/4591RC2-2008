/*
 * func-name: ?ClearTrackAnimationSet@Model@@QAEXXZ
 * func-address: 0x100f1e90
 * callers: none
 * callees: none
 */

void __thiscall Model::ClearTrackAnimationSet(Model *this)
{
  int i; // esi

  for ( i = 0; i < *((_DWORD *)this + 112); ++i )
    (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 94) + 88))(*((_DWORD *)this + 94), i, 0);
}

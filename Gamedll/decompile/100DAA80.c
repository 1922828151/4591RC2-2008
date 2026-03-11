/*
 * func-name: ?Tick@AnimationModal@@MAEXXZ_0
 * func-address: 0x100daa80
 * callers: 0x1000a443
 * callees: none
 */

void __thiscall AnimationModal::Tick(AnimationModal *this)
{
  Model *v2; // ecx

  v2 = (Model *)*((_DWORD *)this + 179);
  if ( v2 && *((_DWORD *)this + 308) != -1 && !Model::IsPlaying(v2) )
    Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 308), 0.5, -1.0, 0.0, 1.0);
  Effect_Base::Tick(this);
}

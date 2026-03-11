/*
 * func-name: ?OnDestroyDevice@PostProcess@@QAEXXZ
 * func-address: 0x10107ee0
 * callers: none
 * callees: none
 */

// attributes: thunk
void __thiscall PostProcess::OnDestroyDevice(PostProcess *this)
{
  PostProcess::RemoveAllEffects(this);
}

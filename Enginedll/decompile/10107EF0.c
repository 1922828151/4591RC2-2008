/*
 * func-name: ?OnLostDevice@PostProcess@@QAEXXZ
 * func-address: 0x10107ef0
 * callers: none
 * callees: none
 */

// attributes: thunk
void __thiscall PostProcess::OnLostDevice(PostProcess *this)
{
  PostProcess::RemoveAllEffects(this);
}

/*
 * func-name: ?GetCurrentAnimation@Model@@QAEHXZ
 * func-address: 0x100f29b0
 * callers: none
 * callees: 0x100f25c0
 */

int __thiscall Model::GetCurrentAnimation(Model *this)
{
  if ( Model::IsPlaying(this, *((_DWORD *)this + 99)) )
    return *((_DWORD *)this + 99);
  else
    return -1;
}

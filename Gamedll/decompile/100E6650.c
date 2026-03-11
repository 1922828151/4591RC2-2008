/*
 * func-name: ?OnJump@SamplePlayer@@QAEXXZ_0
 * func-address: 0x100e6650
 * callers: 0x10019a79
 * callees: none
 */

void __thiscall SamplePlayer::OnJump(SamplePlayer *this)
{
  int v2; // ecx

  if ( !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 291)) )
  {
    v2 = *((_DWORD *)this + 291);
    *((float *)this + 212) = *((float *)this + 212) + 10.0;
    Model::TransitionToAnimation(*((Model **)this + 179), v2, 0.2, -1.0, 0.0, 1.0);
  }
}

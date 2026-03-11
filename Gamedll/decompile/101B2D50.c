/*
 * func-name: ?SetCameraCurDistance@Seat@GameClient@@QAEXM@Z_0
 * func-address: 0x101b2d50
 * callers: 0x1000e692
 * callees: none
 */

void __thiscall GameClient::Seat::SetCameraCurDistance(GameClient::Seat *this, float a2)
{
  int v2; // edx

  v2 = *((_DWORD *)this + 6);
  *((float *)this + 47) = a2;
  if ( *(float *)(v2 + 272) > (double)a2 )
    *((float *)this + 47) = *(float *)(v2 + 272);
  if ( *(float *)(v2 + 268) < (double)*((float *)this + 47) )
    *((float *)this + 47) = *(float *)(v2 + 268);
}

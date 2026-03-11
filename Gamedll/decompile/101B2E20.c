/*
 * func-name: ?SetRotationSpeed@Seat@GameClient@@QAEXAAVVector@@@Z_0
 * func-address: 0x101b2e20
 * callers: 0x1000cda6
 * callees: none
 */

void __thiscall GameClient::Seat::SetRotationSpeed(GameClient::Seat *this, struct Vector *a2)
{
  float *v3; // edx
  float v4; // [esp+8h] [ebp+4h]
  float v5; // [esp+8h] [ebp+4h]
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]
  float v9; // [esp+8h] [ebp+4h]

  *((_DWORD *)this + 73) = *(_DWORD *)a2;
  *((_DWORD *)this + 74) = *((_DWORD *)a2 + 1);
  v3 = (float *)*((_DWORD *)this + 6);
  *((_DWORD *)this + 75) = *((_DWORD *)a2 + 2);
  if ( v3[59] < (double)*(float *)a2 )
    *((float *)this + 73) = v3[59];
  v4 = -v3[59];
  if ( v4 > (double)*(float *)a2 )
    *((float *)this + 73) = v4;
  if ( v3[60] < (double)*((float *)a2 + 1) )
    *((float *)this + 74) = v3[60];
  v5 = -v3[60];
  if ( v5 > (double)*((float *)a2 + 1) )
    *((float *)this + 74) = v5;
  if ( v3[61] < (double)*((float *)a2 + 2) )
    *((float *)this + 75) = v3[61];
  v6 = -v3[61];
  if ( v6 > (double)*((float *)a2 + 2) )
    *((float *)this + 75) = v6;
  v7 = fabs(*((float *)this + 73));
  if ( v7 < 0.00009999999747378752 )
    *((float *)this + 73) = 0.0;
  v8 = fabs(*((float *)this + 74));
  if ( v8 < 0.00009999999747378752 )
    *((float *)this + 74) = 0.0;
  v9 = fabs(*((float *)this + 75));
  if ( v9 < 0.00009999999747378752 )
    *((float *)this + 75) = 0.0;
}

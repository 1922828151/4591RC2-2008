/*
 * func-name: ?Clone@CombinRobot@GameClient@@QAE_NPAV12@@Z_0
 * func-address: 0x101119f0
 * callers: 0x1000a961
 * callees: 0x1000254a
 */

char __thiscall GameClient::CombinRobot::Clone(GameClient::CombinRobot *this, struct GameClient::CombinRobot *a2)
{
  _DWORD *v3; // edx
  _DWORD *v4; // eax
  int v5; // ebx

  if ( !a2 )
    return 0;
  *((_DWORD *)this + 366) = -1;
  *((_DWORD *)this + 367) = -1;
  *((_DWORD *)this + 368) = -1;
  *((_DWORD *)this + 374) = -1;
  v3 = (_DWORD *)((char *)a2 + 1524);
  v4 = (_DWORD *)((char *)this + 1520);
  v5 = 3;
  do
  {
    *v4 = *(_DWORD *)((char *)v4 + a2 - this);
    v4[15] = v3[14];
    v4[1] = *v3;
    v4[16] = v3[15];
    v4[2] = v3[1];
    v4[17] = v3[16];
    v4[3] = v3[2];
    v4[18] = v3[17];
    v4[4] = v3[3];
    v4[19] = v3[18];
    v4 += 5;
    v3 += 5;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)this + 410) = *((_DWORD *)a2 + 410);
  *((_DWORD *)this + 418) = *((_DWORD *)a2 + 418);
  *((_DWORD *)this + 411) = *((_DWORD *)a2 + 411);
  *((_DWORD *)this + 419) = *((_DWORD *)a2 + 419);
  *((_DWORD *)this + 412) = *((_DWORD *)a2 + 412);
  *((_DWORD *)this + 420) = *((_DWORD *)a2 + 420);
  *((_DWORD *)this + 413) = *((_DWORD *)a2 + 413);
  *((_DWORD *)this + 421) = *((_DWORD *)a2 + 421);
  *((_DWORD *)this + 414) = *((_DWORD *)a2 + 414);
  *((_DWORD *)this + 422) = *((_DWORD *)a2 + 422);
  *((_DWORD *)this + 415) = *((_DWORD *)a2 + 415);
  *((_DWORD *)this + 423) = *((_DWORD *)a2 + 423);
  *((_DWORD *)this + 416) = *((_DWORD *)a2 + 416);
  *((_DWORD *)this + 424) = *((_DWORD *)a2 + 424);
  *((_DWORD *)this + 417) = *((_DWORD *)a2 + 417);
  *((_DWORD *)this + 425) = *((_DWORD *)a2 + 425);
  if ( (char *)this + 1704 != (char *)a2 + 1704 )
    sub_1000254A((int)a2 + 1704);
  return 1;
}

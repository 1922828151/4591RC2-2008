/*
 * func-name: sub_10036C40
 * func-address: 0x10036c40
 * callers: 0x1000ef7f
 * callees: 0x1000779d, 0x1000d1bb, 0x1000f9d9, 0x1001252b, 0x10013b3d, 0x100146dc
 */

void __thiscall sub_10036C40(int this, GameClient::Robot *a2)
{
  bool v2; // zf

  if ( a2 )
  {
    if ( *(float *)(this + 36) <= (double)*(float *)(this + 32) )
    {
      *(float *)(this + 32) = 0.0;
      *(float *)(this + 16) = 0.0;
      *(float *)(this + 12) = 0.0;
      *(float *)(this + 8) = 0.0;
      *(float *)(this + 28) = 0.0;
      *(float *)(this + 24) = 0.0;
      *(float *)(this + 20) = 0.0;
      switch ( *(_DWORD *)(this + 4) )
      {
        case 1:
          sub_1000D1BB((int)a2);
          sub_10013B3D(a2);
          break;
        case 2:
          sub_1001252B((int)a2);
          sub_10013B3D(a2);
          break;
        case 4:
          sub_1000F9D9((int)a2);
          sub_10013B3D(a2);
          break;
        case 8:
          sub_1000779D((int)a2);
          sub_10013B3D(a2);
          break;
        case 0x10:
          sub_100146DC((int)a2);
          goto LABEL_11;
        default:
LABEL_11:
          sub_10013B3D(a2);
          break;
      }
    }
    else
    {
      v2 = *(_DWORD *)(this + 4) == 2;
      *(float *)(this + 32) = *(float *)(this + 32) + GDeltaTime;
      if ( v2 )
        sub_1001252B((int)a2);
    }
  }
}

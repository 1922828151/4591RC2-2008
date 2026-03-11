/*
 * func-name: sub_101DCB90
 * func-address: 0x101dcb90
 * callers: 0x1000dc8d
 * callees: 0x10003f58, 0x1000a097, 0x1000aa9c, 0x10014669, 0x102c26d0
 */

int __thiscall sub_101DCB90(_BYTE *this)
{
  CameraHandler *v1; // eax
  struct Camera *Camera; // eax
  float v3; // ecx
  float v4; // edx
  int v5; // eax
  CameraHandler *v6; // eax
  struct Camera *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  int v11; // eax
  int ControlHandle; // eax
  Input *v13; // eax
  int v14; // eax
  int v15; // eax
  Input *v16; // eax
  bool v17; // al
  double v18; // st7
  double v19; // st7
  int v20; // eax
  int v21; // eax
  Input *v22; // eax
  int v23; // eax
  int v24; // eax
  Input *v25; // eax
  bool v26; // al
  double v27; // st7
  int v28; // eax
  double v29; // st7
  CameraHandler *v30; // eax
  _DWORD v32[2]; // [esp+78h] [ebp-B0h] BYREF
  _DWORD v33[2]; // [esp+80h] [ebp-A8h] BYREF
  struct Vector *v34; // [esp+88h] [ebp-A0h]
  struct Matrix *v35; // [esp+8Ch] [ebp-9Ch]
  float v36; // [esp+90h] [ebp-98h]
  float v37; // [esp+94h] [ebp-94h]
  float v38; // [esp+98h] [ebp-90h]
  float v39; // [esp+9Ch] [ebp-8Ch]
  float v40; // [esp+ACh] [ebp-7Ch]
  float v41; // [esp+B0h] [ebp-78h]
  float v42; // [esp+B4h] [ebp-74h]
  float v43; // [esp+B8h] [ebp-70h]
  _DWORD *v44; // [esp+BCh] [ebp-6Ch]
  float v45; // [esp+C0h] [ebp-68h]
  float v46; // [esp+C4h] [ebp-64h]
  int v47; // [esp+C8h] [ebp-60h]
  float v48; // [esp+CCh] [ebp-5Ch]
  float v49; // [esp+D0h] [ebp-58h] BYREF
  float v50; // [esp+D4h] [ebp-54h]
  float v51; // [esp+D8h] [ebp-50h]
  _DWORD v52[2]; // [esp+DCh] [ebp-4Ch] BYREF
  int v53; // [esp+124h] [ebp-4h]

  if ( !this[20] )
  {
    sub_10014669(v52);
    v41 = *(float *)(Input::Instance(0.0) + 1712) / 10.0;
    v42 = *(float *)(Input::Instance(LODWORD(v41)) + 1716) / 10.0;
    sub_102C26D0(v42, v38, v39);
    v1 = CameraHandler::Instance();
    Camera = CameraHandler::GetCamera(v1, 0);
    v3 = *((float *)Camera + 88);
    v4 = *((float *)Camera + 89);
    v5 = *((_DWORD *)Camera + 90);
    v45 = v3;
    v46 = v4;
    v47 = v5;
    v6 = CameraHandler::Instance();
    v7 = CameraHandler::GetCamera(v6, 0);
    v8 = *((float *)v7 + 94);
    v9 = *((float *)v7 + 95);
    v10 = *((float *)v7 + 96);
    v39 = 0.0;
    v48 = v8;
    v44 = v33;
    v49 = v9;
    v50 = v10;
    std::string::string(v33, "walk_forwards");
    v11 = Input::Instance(v33[0]);
    ControlHandle = Input::GetControlHandle(v11);
    v13 = (Input *)Input::Instance(ControlHandle);
    if ( Input::ControlDown(v13) )
    {
      v37 = 0.0;
      v42 = COERCE_FLOAT(v32);
      std::string::string(v32, "accelerate");
      v53 = 1;
      v14 = Input::Instance(v32[0]);
      v15 = Input::GetControlHandle(v14);
      v16 = (Input *)Input::Instance(v15);
      v17 = Input::ControlDown(v16);
      v18 = v46;
      if ( v17 )
      {
        v40 = v18 * 100.0;
        v42 = 100.0 * v48;
        v41 = v40 * GDeltaTime;
        v42 = GDeltaTime * v42;
        v43 = v41 + v43;
        v19 = v42;
      }
      else
      {
        v42 = v18 * 10.0;
        v40 = 10.0 * v48;
        v42 = v42 * GDeltaTime;
        v41 = GDeltaTime * v40;
        v43 = v42 + v43;
        v19 = v41;
      }
      v45 = v19 + v45;
    }
    v37 = 0.0;
    v42 = COERCE_FLOAT(v32);
    std::string::string(v32, "walk_backwards");
    v53 = 2;
    v20 = Input::Instance(v32[0]);
    v21 = Input::GetControlHandle(v20);
    v22 = (Input *)Input::Instance(v21);
    if ( Input::ControlDown(v22) )
    {
      v37 = 0.0;
      v42 = COERCE_FLOAT(v32);
      std::string::string(v32, "accelerate");
      v53 = 3;
      v23 = Input::Instance(v32[0]);
      v24 = Input::GetControlHandle(v23);
      v25 = (Input *)Input::Instance(v24);
      v26 = Input::ControlDown(v25);
      v27 = v46;
      if ( v26 )
      {
        v49 = v27 * 100.0;
        v51 = 100.0 * v48;
      }
      else
      {
        v49 = v27 * 10.0;
        v51 = 10.0 * v48;
      }
      v42 = GDeltaTime;
      v46 = v49 * GDeltaTime;
      v48 = GDeltaTime * v51;
      v43 = v43 - v46;
      v45 = v45 - v48;
    }
    v28 = Input::Instance(LODWORD(v38));
    v42 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 80))(v28));
    flt_103B1798 = (double)SLODWORD(v42) * 0.009999999776482582 + flt_103B1798;
    v29 = 1.0;
    if ( flt_103B1798 >= 1.0 )
    {
      if ( flt_103B1798 <= 1000.0 )
      {
LABEL_16:
        v49 = v43;
        v50 = flt_103B1798;
        v51 = v45;
        v37 = 90.0;
        v36 = 0.0;
        v35 = (struct Matrix *)v52;
        v34 = (struct Vector *)&v49;
        v30 = CameraHandler::Instance();
        CameraHandler::setToView(v30, v34, v35, v36, v37);
        return (*(int (__thiscall **)(int))(*(_DWORD *)dword_103B6670 + 16))(dword_103B6670);
      }
      v29 = 1000.0;
    }
    flt_103B1798 = v29;
    goto LABEL_16;
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_103B6670 + 16))(dword_103B6670);
}

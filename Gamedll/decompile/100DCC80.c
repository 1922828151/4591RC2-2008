/*
 * func-name: ?ShakeCamera@CameraHandler@@QAEXAAVVector@@0M@Z_0
 * func-address: 0x100dcc80
 * callers: 0x1000eed0
 * callees: none
 */

void __thiscall CameraHandler::ShakeCamera(CameraHandler *this, struct Vector *a2, struct Vector *a3, float a4)
{
  int v4; // eax

  *((float *)this + 119) = *(float *)&GSeconds;
  *((_DWORD *)this + 110) = *(_DWORD *)a2;
  *((_DWORD *)this + 111) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 112) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 113) = *(_DWORD *)a3;
  *((_DWORD *)this + 114) = *((_DWORD *)a3 + 1);
  v4 = *((_DWORD *)a3 + 2);
  *((float *)this + 120) = a4;
  *((_DWORD *)this + 115) = v4;
  *((_BYTE *)this + 484) = 1;
  *((float *)this + 116) = 0.0;
  *((float *)this + 117) = 0.0;
  *((float *)this + 118) = 0.0;
}

/*
 * func-name: ?GetRealPoint@CHotZonePic@@QAE?AUtagPOINT@@ABU2@@Z
 * func-address: 0x100a9340
 * callers: none
 * callees: 0x101a26c0
 */

const struct tagPOINT *__thiscall CHotZonePic::GetRealPoint(CHotZonePic *this, const struct tagPOINT *a2, int *a3)
{
  double v3; // st7

  v3 = (double)a3[1] / (double)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42));
  a2->x = (int)((double)*a3
              / (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41))
              * (double)(*((_DWORD *)this + 150) - *((_DWORD *)this + 148))
              + (double)*((int *)this + 148));
  a2->y = (int)(v3 * (double)(*((_DWORD *)this + 151) - *((_DWORD *)this + 149)) + (double)*((int *)this + 149));
  return a2;
}

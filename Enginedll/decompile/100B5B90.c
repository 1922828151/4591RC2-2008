/*
 * func-name: ?DrawPolyLine@CREDialog@@QAEJPAUtagPOINT@@IK@Z
 * func-address: 0x100b5b90
 * callers: 0x100bdb80
 * callees: 0x100d6d20, 0x101189f0, 0x101a24ac, 0x101a253a, 0x101a26a0
 */

int __userpurge CREDialog::DrawPolyLine@<eax>(
        CREDialog *this@<ecx>,
        int a2@<edi>,
        struct tagPOINT *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  char *v7; // eax
  float *v10; // esi
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  double v13; // st7
  bool v14; // zf
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  struct RenderDevice *v22; // eax
  int v23; // [esp+4Ch] [ebp-1Ch]
  _DWORD v24[2]; // [esp+60h] [ebp-8h] BYREF
  void *retaddr; // [esp+68h] [ebp+0h]
  struct tagPOINT *v26; // [esp+6Ch] [ebp+4h]

  v5 = a4;
  v7 = (char *)operator new(28 * a4);
  v24[1] = v7;
  if ( !v7 )
    return -2147024882;
  v23 = a2;
  if ( a4 )
  {
    v10 = (float *)(v7 + 4);
    v26 = (struct tagPOINT *)a4;
    do
    {
      if ( *((_BYTE *)GUISystem::Instance() + 45) )
      {
        v11 = RenderDevice::Instance();
        v24[0] = (*(int (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v11 + 296))(v11, v23);
        *(v10 - 1) = (double)v24[0] * ((double)*((int *)this + 173) + (double)a3->x) * 0.0009765625;
        v12 = RenderDevice::Instance();
        v24[0] = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v12 + 300))(v12);
        v13 = (double)v24[0] * ((double)a3->y + (double)*((int *)this + 174)) / 768.0;
      }
      else
      {
        *(v10 - 1) = (double)*((int *)this + 173) + (double)a3->x;
        v13 = (double)a3->y + (double)*((int *)this + 174);
      }
      *v10 = v13;
      *((_DWORD *)v10 + 3) = a5;
      v10[1] = 0.5;
      v10 += 7;
      ++a3;
      v14 = v26 == (struct tagPOINT *)1;
      v26 = (struct tagPOINT *)((char *)v26 - 1);
      *(v10 - 5) = 1.0;
      *(v10 - 3) = 0.0;
      *(v10 - 2) = 0.0;
    }
    while ( !v14 );
    v5 = a4;
  }
  if ( (dword_11240B40 & 1) == 0 )
  {
    dword_11240B40 |= 1u;
    dword_11240B24 = 0;
    dword_11240B28 = 0;
    dword_11240B2C = 0;
    dword_11240B30 = 0;
    dword_11240B34 = 0;
    dword_11240B38 = 0;
    dword_11240B3C = 0;
    dword_11240B1C = 0;
    dword_11240B20 = 0;
    atexit(sub_101B8F70);
    if ( (dword_11240B40 & 1) == 0 )
    {
      dword_11240B40 |= 1u;
      dword_11240B24 = 0;
      dword_11240B28 = 0;
      dword_11240B2C = 0;
      dword_11240B30 = 0;
      dword_11240B34 = 0;
      dword_11240B38 = 0;
      dword_11240B3C = 0;
      dword_11240B1C = 0;
      dword_11240B20 = 0;
      atexit(sub_101B8F70);
    }
  }
  (*(void (__stdcall **)(int, int))(*(_DWORD *)dword_11240B20 + 40))(dword_11240B20, v23);
  v24[0] = 0;
  v15 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v15 + 427) + 352))(*((_DWORD *)v15 + 427), v24);
  v16 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v16 + 416))(v16, dword_10281554);
  v17 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v17 + 440))(v17, 0, 1, 3);
  v18 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v18 + 440))(v18, 0, 4, 3);
  v19 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, int, unsigned int, void *, int))(**((_DWORD **)v19 + 427) + 332))(
    *((_DWORD *)v19 + 427),
    3,
    v5 - 1,
    retaddr,
    28);
  v20 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v20 + 440))(v20, 0, 1, 4);
  v21 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v21 + 440))(v21, 0, 4, 4);
  v22 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v22 + 427) + 348))(*((_DWORD *)v22 + 427), v24[0]);
  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v24[0] + 8))(v24[0]);
  operator delete[](retaddr);
  return 0;
}

/*
 * func-name: ?GetNewBatchItem@BatchRenderer@@QAEPAUBatchItem@@XZ
 * func-address: 0x1005b520
 * callers: 0x10055de0, 0x100efe90, 0x100f04f0
 * callees: 0x100553e0, 0x10059bd0, 0x101a2534
 */

struct BatchItem *__thiscall BatchRenderer::GetNewBatchItem(BatchRenderer *this)
{
  int v2; // eax
  int v3; // esi
  void *v5; // eax

  v2 = *((_DWORD *)this + 259);
  if ( v2 >= 256 )
  {
    v5 = operator new(0x11Cu);
    if ( v5 )
      return (struct BatchItem *)sub_100553E0((int)v5);
    else
      return 0;
  }
  else
  {
    v3 = *((_DWORD *)this + v2 + 3);
    *(float *)(v3 + 268) = 0.0;
    *(_DWORD *)(v3 + 272) = 0;
    *(_DWORD *)(v3 + 260) = 0;
    *(_BYTE *)(v3 + 265) = 0;
    *(_DWORD *)(v3 + 52) = 0;
    *(_DWORD *)(v3 + 216) = 0;
    *(_DWORD *)(v3 + 204) = 0;
    *(_DWORD *)(v3 + 92) = 0;
    *(_BYTE *)(v3 + 208) = 0;
    *(_BYTE *)(v3 + 161) = 1;
    *(_DWORD *)(v3 + 256) = 0;
    *(_DWORD *)(v3 + 276) = 0;
    sub_10059BD0((_DWORD *)v3, 0, 0);
    *(_DWORD *)(v3 + 16) = 1;
    *(_DWORD *)(v3 + 232) = 0;
    ++*((_DWORD *)this + 259);
    return (struct BatchItem *)v3;
  }
}

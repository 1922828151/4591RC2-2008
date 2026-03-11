/*
 * func-name: ?CheckHotZone@CHotZonePic@@QAEHABUtagPOINT@@@Z
 * func-address: 0x100c4500
 * callers: 0x100c46c0
 * callees: 0x100a9030, 0x100b5820, 0x101a26c0
 */

const struct tagPOINT *__thiscall CHotZonePic::CheckHotZone(CREDialog **this, const struct tagPOINT *a2)
{
  RECT *v2; // edi
  unsigned int i; // esi
  LONG top; // ecx
  int v5; // ebp
  _DWORD *v6; // esi
  LONG right; // ebx
  LONG bottom; // edi
  struct RETextureNode *Texture; // eax
  int v10; // ebp
  struct tagPOINT v13; // [esp+24h] [ebp-20h]
  _DWORD v14[2]; // [esp+2Ch] [ebp-18h] BYREF
  struct tagRECT v15; // [esp+34h] [ebp-10h] BYREF
  const struct tagPOINT *v16; // [esp+48h] [ebp+4h]

  v2 = (RECT *)this;
  v13 = *a2;
  for ( i = 0; ; i = (unsigned int)&v16->x + 1 )
  {
    top = v2[34].top;
    v16 = (const struct tagPOINT *)i;
    if ( !top || i >= (v2[34].right - top) >> 2 )
      break;
    v5 = *(_DWORD *)(v2[34].top + 4 * i);
    if ( v5 )
    {
      v6 = (_DWORD *)(v5 + 16);
      if ( CHotZonePic::SetZoneRect(
             (CHotZonePic *)v2,
             (struct tagRECT *)v5,
             v2 + 37,
             (struct tagRECT *)(v5 + 16),
             (struct tagRECT *)(*(_DWORD *)(v5 + 32) + 12),
             &v15,
             *(_BYTE *)(v5 + 37)) )
      {
        if ( v13.x >= v15.left )
        {
          right = v15.right;
          if ( v13.x <= v15.right && v13.y >= v15.top )
          {
            bottom = v15.bottom;
            if ( v13.y <= v15.bottom )
            {
              Texture = CREDialog::GetTexture(this[28], **(_DWORD **)(v5 + 32));
              if ( Texture )
              {
                v10 = *((_DWORD *)Texture + 130);
                if ( v10 )
                {
                  if ( !(*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v10 + 76))(
                          v10,
                          0,
                          v14,
                          0,
                          0) )
                  {
                    if ( *(_BYTE *)(v14[1]
                                  + (int)((double)(v13.y - v15.top)
                                        / (double)(bottom - v15.top)
                                        * (double)(v6[3] - v6[1]))
                                  * v14[0]
                                  + 4
                                  * (int)((double)(v13.x - v15.left) / (double)(right - v15.left) * (double)(v6[2] - *v6))
                                  + 3) )
                    {
                      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v10 + 80))(v10, 0);
                      return v16;
                    }
                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v10 + 80))(v10, 0);
                  }
                }
              }
            }
            v2 = (RECT *)this;
          }
        }
      }
    }
  }
  return (const struct tagPOINT *)-1;
}

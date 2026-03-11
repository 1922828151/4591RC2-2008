/*
 * func-name: sub_1025B930
 * func-address: 0x1025b930
 * callers: 0x10002d24
 * callees: none
 */

_DWORD *__thiscall sub_1025B930(_DWORD *this, struct CTYDialog *a2)
{
  CREElement *v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  struct tagRECT rc; // [esp+F4h] [ebp-1Ch] BYREF
  int v23; // [esp+10Ch] [ebp-4h]
  int i; // [esp+114h] [ebp+4h]

  CProgressBar::CProgressBar((CProgressBar *)this, a2);
  v23 = 0;
  *this = &CCircleProgress::`vftable';
  v4 = (CREElement *)(this + 192);
  for ( i = 15; i >= 0; --i )
  {
    CREElement::CREElement(v4);
    v4 = (CREElement *)((char *)v4 + 196);
  }
  this[993] = 0;
  this[994] = 0;
  SetRect(&rc, 52, 203, 87, 238);
  v5 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
         a2,
         L"GUI.dds",
         &rc,
         -1);
  CREElement::SetTexture((CREElement *)(this + 192), v5);
  SetRect(&rc, 90, 203, 125, 238);
  v6 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
         a2,
         L"GUI.dds",
         &rc,
         -1);
  CREElement::SetTexture((CREElement *)(this + 241), v6);
  SetRect(&rc, 128, 203, 163, 238);
  v7 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
         a2,
         L"GUI.dds",
         &rc,
         -1);
  CREElement::SetTexture((CREElement *)(this + 290), v7);
  SetRect(&rc, 52, 240, 87, 275);
  v8 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
         a2,
         L"GUI.dds",
         &rc,
         -1);
  CREElement::SetTexture((CREElement *)(this + 339), v8);
  SetRect(&rc, 90, 240, 125, 275);
  v9 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
         a2,
         L"GUI.dds",
         &rc,
         -1);
  CREElement::SetTexture((CREElement *)(this + 388), v9);
  SetRect(&rc, 128, 240, 163, 275);
  v10 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 437), v10);
  SetRect(&rc, 52, 277, 87, 312);
  v11 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 486), v11);
  SetRect(&rc, 90, 277, 125, 312);
  v12 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 535), v12);
  SetRect(&rc, 128, 277, 163, 312);
  v13 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 584), v13);
  SetRect(&rc, 52, 315, 87, 350);
  v14 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 633), v14);
  SetRect(&rc, 90, 315, 125, 350);
  v15 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 682), v15);
  SetRect(&rc, 128, 315, 163, 350);
  v16 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 731), v16);
  SetRect(&rc, 52, 353, 87, 388);
  v17 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 780), v17);
  SetRect(&rc, 90, 353, 125, 388);
  v18 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 829), v18);
  SetRect(&rc, 128, 353, 163, 388);
  v19 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 878), v19);
  SetRect(&rc, 52, 391, 87, 426);
  v20 = (*(int (__thiscall **)(struct CTYDialog *, const wchar_t *, struct tagRECT *, int))(*(_DWORD *)a2 + 20))(
          a2,
          L"GUI.dds",
          &rc,
          -1);
  CREElement::SetTexture((CREElement *)(this + 927), v20);
  this[992] = -1;
  this[976] = 0;
  this[977] = 0;
  this[978] = 0;
  this[979] = 0;
  this[980] = 0;
  this[981] = 0;
  this[982] = 0;
  this[983] = 0;
  this[984] = 0;
  this[985] = 0;
  this[986] = 0;
  this[987] = 0;
  this[988] = 0;
  this[989] = 0;
  this[990] = 0;
  this[991] = 0;
  return this;
}

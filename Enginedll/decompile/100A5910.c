/*
 * func-name: ?GetNextItemPos@CUniBuffer@CREEditBox@@QAEXHPAH@Z
 * func-address: 0x100a5910
 * callers: 0x100ac530
 * callees: 0x1006ad40, 0x100a5480
 */

void __thiscall CREEditBox::CUniBuffer::GetNextItemPos(void **this, int a2, int *a3)
{
  const struct tag_SCRIPT_LOGATTR *v4; // ebp
  int v5; // esi
  struct tag_SCRIPT_LOGATTR v6; // al

  *a3 = a2;
  if ( !*((_BYTE *)this + 16) || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)this) >= 0 )
  {
    v4 = CREEditBox::CUniBuffer::_ScriptString_pLogAttr(this[5]);
    if ( v4 )
    {
      if ( CREEditBox::CUniBuffer::_ScriptString_pcOutChars(this[5]) )
      {
        v5 = *CREEditBox::CUniBuffer::_ScriptString_pcOutChars(this[5]);
        if ( a2 + 1 < v5 )
          v5 = a2 + 1;
        if ( v5 >= *CREEditBox::CUniBuffer::_ScriptString_pcOutChars(this[5]) - 1 )
        {
LABEL_12:
          *a3 = *CREEditBox::CUniBuffer::_ScriptString_pcOutChars(this[5]) - 1;
        }
        else
        {
          while ( 1 )
          {
            v6 = v4[v5];
            if ( (*(_BYTE *)&v6 & 8) != 0 )
            {
              *a3 = v5;
              return;
            }
            if ( (*(_BYTE *)&v6 & 2) != 0 && (*(_BYTE *)&v4[v5 + 1] & 2) == 0 )
              break;
            if ( ++v5 >= *CREEditBox::CUniBuffer::_ScriptString_pcOutChars(this[5]) - 1 )
              goto LABEL_12;
          }
          *a3 = v5 + 1;
        }
      }
    }
  }
}

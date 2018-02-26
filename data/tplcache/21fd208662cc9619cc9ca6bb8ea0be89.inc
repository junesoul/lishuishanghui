<div class="latestnews">
   <dl class="tbox light">
    <dt class="light"><strong>{dede:field name='typename'/}</strong><span class="more"><a href="{dede:field name='typeurl'/}">更多...</a></span></dt>
    <dd class="light">
     <ul class="d2 ico2">
      {dede:arclist row='6' orderby='pubdate'}
      <li><a href="[field:arcurl/]">[field:title/]</a><span>[field:pubdate function="MyDate('m-d',@me)"/]</span></li>
      {/dede:arclist}
     </ul>
    </dd>
   </dl>
  </div>
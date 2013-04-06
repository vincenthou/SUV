<?php
/* @var $this SiteController */
$this->pageTitle=Yii::app()->name;
?>
<div class="wrapper">
    <div class="slider-wrapper" data-effect=<?php echo $effect;?>>
        <a herf="#" id="prev" class="slider-btn prev-btn"></a>
        <a herf="#" id="next" class="slider-btn next-btn"></a>
        <div class="slider" id="slider"> 
            <img src="<?php echo Yii::app()->request->baseUrl;?>/images/test/1.jpg"/> 
            <img src="<?php echo Yii::app()->request->baseUrl;?>/images/test/2.jpg"/> 
            <img src="<?php echo Yii::app()->request->baseUrl;?>/images/test/3.jpg"/> 
        </div>
    </div>    
    <ul class="news">
        <li class="new-item">
            <div class="new-header">
                <h2 class="new-title">Title</h2>
            </div>            
            <div class="new-content">无论是否亲身经历，下面的情境你一定不会感到陌生：你正在用手机和哥们胡侃，这时却有手机铃声响了，你赶紧放下手机，掏出另一部来，开始严肃正经的处理公事。调查显示近四成的中国手机用户使用不止一部手机，在巴西这一数据甚至超过了一半，你是“多机党”吗？
            </div>
        </li> 
        <li class="new-item"></li>
    </ul>
</div>
<script type="text/javascript">
    $(function(){
        SUV.index.init();
    });
</script>
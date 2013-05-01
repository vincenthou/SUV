<?php /* @var $this Controller */ ?>
<?php $this->beginContent('//layouts/admin'); ?>
<div id="content">
	<?php echo $content; ?>
</div><!-- content -->
<script type="text/javascript">
    $(function(){
        var htmlHeight = $('html').height();
        var windowHeight = document.height;
        if (htmlHeight < windowHeight) {
            $('.admin-wrapper').css('padding-bottom', (windowHeight - htmlHeight) + 'px');
        }
    });
</script>
<?php $this->endContent(); ?>
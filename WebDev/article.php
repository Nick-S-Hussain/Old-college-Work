<?php

require 'includes/database.php';
require 'includes/article.php';

$conn = getDB();

if(isset($_GET['id'])){
	
	$article = getArticle($conn, $_GET['id']);

}else{
	$article = null;
}

?>
<?php require 'includes/header.php'; ?>	
			<?php if($article === null): ?>
				<p>No article found. :( </p>
			<?php else: ?>	
			<ul>
				<li>
					<article>
						<h2><?= htmlspecialchars($article['title']); ?> </h2>
						<p><?= htmlspecialchars($article['content']); ?> </p>
					</article>
				</li>
			</ul>
			
			<?php endif; ?>
<?php require 'includes/footer.php'; ?>
			